/*
 * Copyright (c) 2017 Uber Technologies, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef JAEGERTRACING_CONSTANTS_H
#define JAEGERTRACING_CONSTANTS_H

#define JAEGERTRACING_WITH_YAML_CPP

namespace jaegertracing {

static constexpr auto kJaegerClientVersion = "C++-0.5.0";
static constexpr auto kJaegerClientVersionTagKey = "jaeger.version";
static constexpr auto kJaegerDebugHeader = "jaeger-debug-id";
static constexpr auto kJaegerBaggageHeader = "jaeger-baggage";
static constexpr auto kTracerHostnameTagKey = "hostname";
static constexpr auto kTracerIPTagKey = "ip";
static constexpr auto kSamplerTypeTagKey = "sampler.type";
static constexpr auto kSamplerParamTagKey = "sampler.param";
static constexpr auto kTraceContextHeaderName = "uber-trace-id";
static constexpr auto kTracerStateHeaderName = kTraceContextHeaderName;
static constexpr auto kTraceBaggageHeaderPrefix = "uberctx-";
static constexpr auto kSamplerTypeConst = "const";
static constexpr auto kSamplerTypeRemote = "remote";
static constexpr auto kSamplerTypeProbabilistic = "probabilistic";
static constexpr auto kSamplerTypeRateLimiting = "ratelimiting";
static constexpr auto kSamplerTypeLowerBound = "lowerbound";

}  // namespace jaegertracing

#endif  // JAEGERTRACING_CONSTANTS_H
